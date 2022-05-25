using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using AppDatabase;

namespace WebApplication3.Admin
{
   public partial class Usuarios : System.Web.UI.Page
   {
      #region INICIALIZAÇÃO 

      // https://www.connectionstrings.com/
      string conexao = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + HttpContext.Current.Server.MapPath("~/App_Data/2021ADSM.accdb") + ";Persist Security Info=False;";

      // CLASSE PARA TRANSAÇÃO COM O BANCO DE DADOS ACCESS
      AppDatabase.OleDBTransaction db = new AppDatabase.OleDBTransaction();

      protected void Page_Load(object sender, EventArgs e)
      {
         // a propriedade da pagina IsPostBack indica que a chamada a pagina foi executada pela primeira vez "False" ou em resposta a um evento na página "True"
         // ESTE CONTROLE É IMPORTANTE PARA NÃO OCORRER REDUNDANCIAS.
         if (IsPostBack == false)
         {
            LerTabelaUsuarios();
         }
      }

      #endregion

      #region SALVAR DADOS
      protected void Enviar_Click(object sender, EventArgs e)
      {
         // SALVA OS DADOS DO USUÁRIO NO BANCO DE DADOS

         // 1. VALIDAR OS DADOS DE ENTRADA
         if (NomeCompleto.Text.Trim() == "")
         {
            Erro.Text = "O Nome deve ser digitado";

         }
         else if (NomeAcesso.Text.Trim() == "")
         {
            Erro.Text = "O Nome de acesso deve ser digitado";

         }
         else if (Senha.Text.Trim() == "")
         {
            Erro.Text = "A senha deve ser digitada";
         }
         else if (PossoGravar(NomeAcesso.Text, Codigo.Text) == false)
         {
            Erro.Text = "Este nome de acesso já existe para outro usuário";
         }
         else
         {
            string comandoSql;

            if (Codigo.Text == "")
            {
               // 2. "INSERT" OS DADOS NA TABELA USUARIOS
               comandoSql = "INSERT INTO Usuarios(NomeCompleto,NomeAcesso,Senha) VALUES('" + AppDatabase.Utilities.Filter(NomeCompleto.Text) + "','" + AppDatabase.Utilities.Filter(NomeAcesso.Text) + "','" + AppDatabase.Utilities.Filter(Senha.Text) + "')";

            }
            else
            {
               comandoSql = "UPDATE Usuarios SET NomeCompleto='" + Utilities.Filter(NomeCompleto.Text) + "',NomeAcesso='" + Utilities.Filter(NomeAcesso.Text) + "',Senha='" + Utilities.Filter(Senha.Text) + "' WHERE Codigo=" + Utilities.Filter(Codigo.Text);
            }

            db.ConnectionString = conexao;
            db.Query(comandoSql);

            LimparControles();
         }
      }

      protected void LimparControles()
      {
         // 3. LIMPAR OS CONTROLES DO FRONT-END

         Codigo.Text = "";
         NomeCompleto.Text = "";
         NomeAcesso.Text = "";
         Senha.Text = "";
         Erro.Text = "";
         LerTabelaUsuarios();
         Enviar.Text = "Inserir";
         Excluir.Visible = false;
      }

      // SE o nome de acesso existe retorne TRUE, se não existe retorne FALSE
      protected bool PossoGravar(string nomeAcesso, string cod)
      {
         string comandoSql = "SELECT * FROM Usuarios WHERE NomeAcesso='" + AppDatabase.Utilities.Filter(nomeAcesso) + "'";
         db.ConnectionString = conexao;
         System.Data.DataTable tb = (System.Data.DataTable)db.Query(comandoSql);

         if (tb.Rows.Count == 1)
         {
            if (tb.Rows[0]["Codigo"].ToString() == cod)
            {
               // SIM, PODE GRAVAR. ESTE NOME É DO USUÁRIO QUE ESTA SENDO EDITADO.
               return true;
            }
            else
            {
               // NÃO, ESTE NOME PERTENCE A OUTRO USUÁRIO
               return false;
            }
         }
         else
         {
            // SIM, ESTE NOME NÃO EXISTE PRA NENHUM OUTRO USUÁRIO
            return true;
         }
      }

      #endregion

      #region RECUPERAR DADOS DO BANCO DE DADOS

      protected void LerTabelaUsuarios()
      {
         string comandoSql = "SELECT Codigo,NomeCompleto,NomeAcesso FROM Usuarios ORDER BY NomeCompleto";

         db.ConnectionString = conexao;
         DataTable tb = (DataTable)db.Query(comandoSql);

         ExibeUsuarios.DataSource = tb;
         ExibeUsuarios.DataBind();

         // LIMPA DO DATATABLE DA MEMÓRIA
         tb.Dispose();
      }
      #endregion

      #region EXIBE OS DADOS PARA EDIÇÃO OU EXCLUSÃO

      protected void ExibeUsuarios_SelectedIndexChanged(object sender, EventArgs e)
      {
         // recupera o código da linha selecionada no grid
         Codigo.Text = ExibeUsuarios.SelectedRow.Cells[1].Text;

         // cria a linha de comando SQL
         string comando = "SELECT * FROM Usuarios WHERE Codigo=" + Utilities.Filter(Codigo.Text);

         db.ConnectionString = conexao;
         DataTable tb = (DataTable)db.Query(comando);

         if (tb.Rows.Count == 1)
         {
            NomeCompleto.Text = tb.Rows[0]["NomeCompleto"].ToString();
            NomeAcesso.Text = tb.Rows[0]["NomeAcesso"].ToString();
            Senha.Text = tb.Rows[0]["Senha"].ToString();

            Enviar.Text = "Editar";
            Excluir.Visible = true;
         }
      }

      protected void Excluir_Click(object sender, EventArgs e)
      {
         string comandoSql = "DELETE FROM Usuarios WHERE Codigo=" + Utilities.Filter(Codigo.Text);
         db.ConnectionString = conexao;
         db.Query(comandoSql);
         LimparControles();
      }

      #endregion
   }

}
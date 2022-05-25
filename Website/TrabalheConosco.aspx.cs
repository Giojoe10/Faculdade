using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using AppDatabase;


namespace WebApplication3
{
   public partial class TrabalheConosco : System.Web.UI.Page
   {
      // https://www.connectionstrings.com/
      string conexao = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + HttpContext.Current.Server.MapPath("~/App_Data/2021ADSM.accdb") + ";Persist Security Info=False;";

      // CLASSE PARA TRANSAÇÃO COM O BANCO DE DADOS ACCESS
      AppDatabase.OleDBTransaction db = new AppDatabase.OleDBTransaction();

      protected void Page_Load(object sender, EventArgs e)
      {
            if (IsPostBack == false)
            {
                LerTabelaUsuarios();
            }
        }

      protected void Enviar_Click(object sender, EventArgs e)
      {
         // FAZER A VALIDAÇÃO DOS DADOS ANTES DE GRAVAR NO BANCO DE DADOS
         
         
         
         
         string enderecoArquivo = "";

         // GRAVA O ARQUIVO ENVIADO PELO USUÁRIO
         if (UploadArquivo.PostedFile.ContentType == "text/plain" || UploadArquivo.PostedFile.ContentType == "application/pdf")
         {
            // Relação dos tipos de arquivos para ContentType.
            // https://developer.mozilla.org/pt-BR/docs/Web/HTTP/Basics_of_HTTP/MIME_types

            enderecoArquivo = GravaArquivo();
         }

         // INSERE UM CANDIDATO A UMA VAGA NO BANCO DE DADOS
         string comando = "INSERT INTO TrabalheConosco(NomeCompleto, Email, Telefone, Sexo, DataNascimento, Cidade, Descricao, Interesse, EnderecoArquivo) VALUES('" + NomeCompleto.Text + "','" + Email.Text + "','" + Telefone.Text + "'," + Sexo.Text + ",'" + DataNascimento.Text + "','" + Cidade.Text + "','" + Descricao.Text + "'," + Interesse.Text + ",'" + enderecoArquivo + "')";

         // CONECTA NO BANCO DE DADOS E REGISTRA UMA LINHA
         db.ConnectionString = conexao;
         db.Query(comando);


         NomeCompleto.Text = "";
         Email.Text = "";
         Telefone.Text = "";
         DataNascimento.Text = "";
         Cidade.Text = "";
         Descricao.Text = "";

         Erro.Text = "SEUS DADOS FORAM REGISTRADOS COM SUCESSO<br/>Obrigado pela participação.";

      }

      // GRAVA O ARQUIVO NA PASTA DESTINO
      protected string GravaArquivo()
      {
         try
         {
            // definir o caminho fisico completo.
            string arquivo = "~/App_Files/" + UploadArquivo.FileName;
               UploadArquivo.SaveAs(HttpContext.Current.Server.MapPath(arquivo));
            return arquivo;
         }
         catch (Exception)
         {
            return "";
         }
      }

        /*
        protected void LerTabelaUsuarios()
        {
            string comandoSql = "SELECT Codigo,NomeCompleto,Email,Telefone,Sexo,DataNascimento,Cidade,Descricao,Interesse FROM TrabalheConosco ORDER BY Codigo";

            db.ConnectionString = conexao;
            DataTable tb = (DataTable)db.Query(comandoSql);

            ExibeUsuarios.DataSource = tb;
            ExibeUsuarios.DataBind();

            // LIMPA DO DATATABLE DA MEMÓRIA
            tb.Dispose();
        }
        */








    }
}
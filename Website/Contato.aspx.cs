using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
//PACOTE COM AS CLASSES PARA ENVIAR UM EMAIL
using System.Net.Mail;
using System.Net;

namespace WebApplication3
{
    public partial class Contato : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            //
        }

        protected void Enviar_Click(object sender, EventArgs e)
        {


                //Tentar executar
                string _nome = NomeUsuario.Text.Trim();
                string _email = EmailUsuario.Text.Trim();
                string _mensagem = Mensagem.Text.Trim();

                // 1. VALIDAR AS ENTRADAS

                if (_nome == "" || _nome.Length < 5)
                {
                    Erro.Text = "Digite seu nome";
                }
                else if (_email == "")
                {
                    Erro.Text = "Digite seu e-mail";
                }
                else if (_mensagem == "")
                {
                    Erro.Text = "Digite sua mensagem";
                }
                else
                {
                    // 2. MONTAR O E-MAIL

                    MailMessage mail = new MailMessage();

                    mail.Subject = "Enviado pelo form de contato";
                    mail.To.Add("contato@seudominio.com.br");
                    MailAddress _from = new MailAddress("contato@seudominio.com.br");
                    mail.From = _from;
                    mail.Body = "DADOS ENVIADOS PELO USUÁRIO\n";
                    mail.Body += "Nome: " + _nome + "\n";
                    mail.Body += "Email: " + _email + "\n";
                    mail.Body += "Mensagem: " + _mensagem + "\n";





                    // 3. ENVIAR O EMAIL ATRAVES DO PROTOCOLO SMTP: System.Net.Mail.SmtpClient

                    SmtpClient smtp = new SmtpClient();
                    smtp.Host = "smtp.seudominio.com.br";
                    smtp.Port = 587;
                    smtp.Credentials = new NetworkCredential("contato@seudominio.com.br", "suasenha");
                    smtp.Send(mail);

                    //FIM
                    mail.Dispose();
                    smtp.Dispose();
                }








            
        }
    }
}
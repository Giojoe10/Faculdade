using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Security;
using System.Web.SessionState;
using ADSM2021;

namespace WebApplication3
{
    public class Global : System.Web.HttpApplication
    {

        protected void Application_Start(object sender, EventArgs e)
        {

        }

        protected void Session_Start(object sender, EventArgs e)
        {

        }

        protected void Application_BeginRequest(object sender, EventArgs e)
        {

        }

        protected void Application_AuthenticateRequest(object sender, EventArgs e)
        {

        }

        protected void Application_Error(object sender, EventArgs e)
        {
            //Executar o tratamento das exceções aqui
            //Recupara os dados da exceção da classe "Exception"
            Exception ex = Server.GetLastError();
            //Criar uma instância da classe "App_Code.RecoverException"
            //Não esqueça de adicionar "Compilar" nas propriedades da classe em App_Code
            RecoverExceptions rec = new RecoverExceptions();
            rec.SaveException(ex);
            Server.ClearError();
        }

        protected void Session_End(object sender, EventArgs e)
        {

        }

        protected void Application_End(object sender, EventArgs e)
        {

        }
    }
}
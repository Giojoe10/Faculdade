using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication3.Admin
{
   public partial class ExibirExcecoes : System.Web.UI.Page
   {
      protected void Page_Load(object sender, EventArgs e)
      {
         LerExcecoes();
      }


      protected void LerExcecoes()
      {
         // indica o caminho físico do arquivo a ser gravado
         string caminhofisico = HttpContext.Current.Server.MapPath("~/Excecoes/Excecoes.txt");
         // grava no arquivo 
         Excecoes.Text = System.IO.File.ReadAllText(caminhofisico).Replace("\n", "<br>").Replace("-----", "<hr>");
      }

   }
}
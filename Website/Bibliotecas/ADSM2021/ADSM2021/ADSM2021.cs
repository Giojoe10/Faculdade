using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Web;

namespace ADSM2021
{

    /// <summary>
    /// Recupera os dados da ultima exceção ocorrida na aplicação
    /// </summary>
    public class RecoverExceptions
    {

        /// <summary>
        /// Obtem ou define o caminho lógico onde será gravado o arquivo de exceções. Default: "~/Excecoes/Excecoes.txt".
        /// </summary>
        public string PathSave
        {
            get
            {
                return ms_PathSave;
            }

            set
            {
                ms_PathSave = value;
            }

        }

        private string ms_PathSave = "~/Excecoes/Excecoes.txt";

        /// <summary>
        /// Salva os dados da exceção no caminho indicado em "PathSave"
        /// </summary>
        /// <param name="ex">Representa a classe "Exception" com os dados da exceção.</param>
        public void SaveException(Exception ex)
        {

            // Salvar no banco de dados
            string conteudo = "DATA: " + DateTime.Now.ToString() + "\n";
            conteudo += "Mensagem: " + ex.Message + "\n";
            conteudo += "TRACE: " + ex.StackTrace + "\n";
            conteudo += "-----\n";

            string caminhofisico = HttpContext.Current.Server.MapPath(ms_PathSave);
            System.IO.File.AppendAllText(caminhofisico, conteudo);
            //Fim

        }


    }
}

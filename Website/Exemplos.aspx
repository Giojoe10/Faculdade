<%@ Page Title="" Language="C#" MasterPageFile="~/Page.Master" AutoEventWireup="true" CodeBehind="Exemplos.aspx.cs" Inherits="WebApplication3.Exemplos" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="Conteudo" runat="server">
    <div>
        <!-- IMAGEM COM LINK -->
        <a target="_blank" href="http://fatec.edu.br">
            <img src="Images/banner1.png" />
        </a>
        <br />
        <br />
        <br />
        <br />
        <br />
        <br />
        <br />
        <!-- VIDEO INCORPORADO -->
        <div>
            <iframe width="640" height="360" src="https://www.youtube.com/embed/Q_NB5luxtic" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

        </div>
        <!-- MAPA INCORPORADO -->
        <div>
            <iframe src="https://www.google.com/maps/embed?pb=!1m14!1m8!1m3!1d14718.767977128833!2d-47.3501613!3d-22.7396868!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x0%3A0xffb368bd91ea12ae!2sFatec%20Americana%20-%20Faculdade%20de%20Tecnologia%20de%20Americana!5e0!3m2!1spt-BR!2sbr!4v1615289603553!5m2!1spt-BR!2sbr" width="600" height="450" style="border: 0;" allowfullscreen="" loading="lazy"></iframe>
        </div>
    </div>
</asp:Content>

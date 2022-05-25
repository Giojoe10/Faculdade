<%@ Page Title="" Language="C#" MasterPageFile="~/Page.Master" AutoEventWireup="true" CodeBehind="Usuarios.aspx.cs" Inherits="WebApplication3.Admin.Usuarios" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="Conteudo" runat="server">
   <div class="row margin-top-60">
      <!-- FORMULÁRIO DE CADASTRO -->
      <div class="col-6">
         <div style="height:500px;" class="box padding-20 margin-right-20">
            <h2>Cadastro do Usuários</h2>
            <br />
            <asp:Label ID="Erro" ForeColor="red" runat="server"></asp:Label>
            <br />
            <asp:Label ID="Codigo" Font-Size="20px" Font-Bold="true" runat="server" ></asp:Label>
            <br />
            <br />
            <label>NOME COMPLETO</label>
            <asp:TextBox ID="NomeCompleto" MaxLength="255" runat="server"></asp:TextBox>

            <label>NOME ACESSO</label>
            <asp:TextBox ID="NomeAcesso" MaxLength="255" runat="server"></asp:TextBox>

            <label>SENHA</label>
            <asp:TextBox ID="Senha" MaxLength="255" runat="server"></asp:TextBox>
            <br />
            <asp:Button ID="Enviar" OnClick="Enviar_Click" runat="server" Text="Inserir" />
            <asp:Button ID="Excluir" OnClick="Excluir_Click" Visible="false" runat="server" Text="Excluir" />
         </div>
      </div>
      <!-- GRID COM OS DADOS CADASTRADOS -->
      <div class="col-6">
         <div class="box">
            <asp:Panel ID="Panel1" Height="500px" ScrollBars="Vertical" runat="server">
               <asp:GridView ID="ExibeUsuarios" OnSelectedIndexChanged="ExibeUsuarios_SelectedIndexChanged" AutoGenerateSelectButton="true" AutoGenerateColumns="true" Width="100%" CellPadding="8" HeaderStyle-BackColor="#dfdfdf" BorderColor="#cccccc" runat="server"></asp:GridView>
           </asp:Panel>
         </div>
      </div>
   </div>
</asp:Content>

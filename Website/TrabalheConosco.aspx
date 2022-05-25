<%@ Page Title="" Language="C#" MasterPageFile="~/Page.Master" AutoEventWireup="true" CodeBehind="TrabalheConosco.aspx.cs" Inherits="WebApplication3.TrabalheConosco" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="Conteudo" runat="server">
   <div class="row margin-top-60">
      <div class="col-6">
         <div class="box padding-20">
            <h2>Trabalhe Conosco</h2>
            <br />
            <asp:Label ID="Erro" ForeColor="red" runat="server" ></asp:Label>
            <br />
            <br />
            <label>NOME COMPLETO</label>
            <asp:TextBox ID="NomeCompleto" MaxLength="255" runat="server"></asp:TextBox>
            <label>EMAIL</label>
            <asp:TextBox ID="Email" MaxLength="255" TextMode="Email" runat="server"></asp:TextBox>
            <label>Data Nascimento</label>
            <asp:TextBox ID="DataNascimento" TextMode="Date" runat="server"></asp:TextBox>
            <label>TELEFONE</label>
            <asp:TextBox ID="Telefone" TextMode="Phone" MaxLength="40" runat="server"></asp:TextBox>
            <label>CIDADE</label>
            <asp:TextBox ID="Cidade" MaxLength="255" runat="server"></asp:TextBox>
            <label>SEXO</label>
            <asp:RadioButtonList ID="Sexo" runat="server" RepeatDirection="Horizontal">
               <asp:ListItem Text="Feminino" Value="0"></asp:ListItem>
               <asp:ListItem Text="Masculino" Value="1"></asp:ListItem>
            </asp:RadioButtonList>
            <label>DESCRIÇÃO</label>
            <asp:TextBox ID="Descricao" TextMode="MultiLine" Rows="10" MaxLength="2000" runat="server"></asp:TextBox>
            <label>ÁREA DE INTERESSE</label>
            <asp:DropDownList ID="Interesse" runat="server">
               <asp:ListItem Text="Programador" Value="1"></asp:ListItem>
               <asp:ListItem Text="Analista de Sistemas" Value="2"></asp:ListItem>
               <asp:ListItem Text="Teste de Software" Value="3"></asp:ListItem>
               <asp:ListItem Text="Projetos" Value="4"></asp:ListItem>
               <asp:ListItem Text="Banco de Dados" Value="5"></asp:ListItem>
               <asp:ListItem Text="Segurança" Value="6"></asp:ListItem>
               <asp:ListItem Text="Suporte" Value="7"></asp:ListItem>
               <asp:ListItem Text="Outro" Value="8"></asp:ListItem>
            </asp:DropDownList>
            <label>ANEXAR ARQUIVO TEXTO</label>
            <asp:FileUpload ID="UploadArquivo" runat="server" />
            <br />
            <br />
            <asp:Button ID="Enviar" OnClick="Enviar_Click" runat="server" Text="Enviar" />
         </div>
      </div>
             <!-- GRID COM OS DADOS CADASTRADOS -->
      <div class="col-6">
         <div class="box">
            <asp:Panel ID="Panel1" Height="500px" ScrollBars="Vertical" runat="server">
               <asp:GridView ID="ExibeUsuarios" AutoGenerateSelectButton="false" AutoGenerateColumns="true" Width="100%" CellPadding="8" HeaderStyle-BackColor="#dfdfdf" BorderColor="#cccccc" runat="server"></asp:GridView>
           </asp:Panel>
         </div>
      </div>
   </div>
</asp:Content>

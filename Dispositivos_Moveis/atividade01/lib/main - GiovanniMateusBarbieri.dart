// ignore_for_file: prefer_const_constructors, prefer_const_literals_to_create_immutables

import 'package:flutter/material.dart';

void main(){
  runApp(HomePage());
}




class Atualiza extends StatefulWidget{
  const Atualiza({Key? key}) : super(key: key);
  @override
  State<StatefulWidget> createState() {
      return Tela1();
  }
}


class Tela1 extends State<Atualiza>{
  TextEditingController loginController = TextEditingController();
  TextEditingController senhaController = TextEditingController();
  String erros ='';
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
      appBar: AppBar(
        title: const Text("Giovanni Mateus Barbieri - Tela 1")
      ),
      body: Center(
        child: Column(
          children: [
            Center(child: TextField(decoration: InputDecoration(border: InputBorder.none, icon: Icon(Icons.person), hintText: "Login"),controller: loginController,)),
            Center(child: TextField(decoration: InputDecoration(border: InputBorder.none, icon: Icon(Icons.password)),obscureText: true,controller: senhaController,)),
            Center(child: Text(erros, style: TextStyle(color: Colors.red),)),
            Center(child: ElevatedButton(
              onPressed: (){
                if(loginController.text=="" || senhaController.text==""){
                    setState((){erros="Insira o Login e a Senha";});
                }
                else if (loginController.text=="Giovanni" && senhaController.text=="123"){
                  Navigator.push(context,MaterialPageRoute(builder: (context) => Tela2()));}
                else{
                  setState(() {
                    erros = "Login ou Senha Incorreto(s)";
                  });
                  
                }
                },
              child: Text("Login"),
                 ),
              )
            ],
          ),
        )
      )
    );
  }
}

class Tela2 extends StatelessWidget {
  const Tela2({ Key? key }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
      appBar: AppBar(
        title: const Text("Giovanni Mateus Barbieri - Tela 2")
      ),
      body: Center(
        child: Column(
          children: [
            Center(child: TextField(decoration: InputDecoration(border: InputBorder.none, icon: Icon(Icons.commute), hintText: "Rua",))),
            Center(child: TextField(decoration: InputDecoration(border: InputBorder.none, icon: Icon(Icons.door_front_door), hintText: "CEP",))),
            Center(child: TextField(decoration: InputDecoration(border: InputBorder.none, icon: Icon(Icons.apps), hintText: "Bairro",))),
            Center(child: TextField(decoration: InputDecoration(border: InputBorder.none, icon: Icon(Icons.bungalow), hintText: "Número",)))
            ],
          ),
        )
      )
    );
  }
}


class HomePage extends StatelessWidget{
  const HomePage({Key? key}) : super(key: key);
  @override
  Widget build(BuildContext context) {
      return MaterialApp(
        title: "Atividade1 - GiovanniMateusBarbieri",
        theme: ThemeData(primarySwatch: Colors.deepPurple),
        home: Atualiza(),
      );
}
}
// ignore_for_file: prefer_const_literals_to_create_immutables, prefer_const_constructors

import 'package:flutter/material.dart';


void main(){
  runApp(const ClasseLayout());
}

class ClasseLayout extends StatelessWidget {
  const ClasseLayout({Key? key}) : super(key: key);  
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
      appBar: AppBar(
        title: const Text("Substitutiva - Giovanni Mateus Barbieri"),
        backgroundColor: Colors.amber,
      ),
      body: Column(mainAxisAlignment: MainAxisAlignment.spaceAround, children:[Row(mainAxisAlignment: MainAxisAlignment.spaceAround, children: [TextButton(onPressed:(){},style: ButtonStyle(backgroundColor: MaterialStateProperty.all(Colors.amber), foregroundColor: MaterialStateProperty.all(Colors.white)), child: Text("Preencher"))],),Row(mainAxisAlignment: MainAxisAlignment.spaceAround, children: [Column(mainAxisAlignment: MainAxisAlignment.spaceAround, children: [Container(height: 25, width: 175,child: TextField(decoration: InputDecoration(hintText: "Escreva um Texto", icon: Icon(Icons.text_fields_rounded)),))],),Column(mainAxisAlignment: MainAxisAlignment.spaceAround, children: [TextButton(onPressed:(){}, style: ButtonStyle(backgroundColor: MaterialStateProperty.all(Colors.amber), foregroundColor: MaterialStateProperty.all(Colors.white)), child: Text("Limpar"))],)],)])
      )
    );
  }
}


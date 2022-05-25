// ignore_for_file: prefer_const_constructors

import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';


class AtualizaTexto extends StatefulWidget{
  const AtualizaTexto({Key? key}) : super(key: key);
  @override
  State<StatefulWidget> createState() {
      return NovaTela();
  }


}

//Tela estática (StatelessWidget)
class NovaTela extends State<AtualizaTexto>{
  int cont=0;
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold( 
        appBar: AppBar(title: const Text('Nova Tela')),
        body: Center(
          child: Row(
            children: [
              Expanded(
                child:GestureDetector(
                  child: Text(
                    'Contador: $cont',
                    style: TextStyle(fontSize: 20.0),
                    ),
                  onTap:(){
                    setState(() {
                      cont++;
                      print(cont);
                    });
                    
                  },
                ),
              ),
              //criar um botão de limpar --> TextButton()
              TextButton(
                onPressed:(){
                  setState(() {
                    cont=0;
                  });
                },
                child: Text('Limpar'))
            ],
          ),
        ),
      ),
      
    );
  }




}
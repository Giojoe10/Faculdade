import 'package:flutter/material.dart';

class SegundaJanela extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text("Segunda Janela"),
        ),
      body: Center(child: ElevatedButton(
        onPressed: (){
          Navigator.pop(context);
        },
        child: const Text("Voltar")
        ),
        )
    );
  }
}
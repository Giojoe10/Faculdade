
import 'package:flutter/material.dart';
import 'package:flutter_application_1/segundajanela.dart';

class PrimeiraJanela extends StatelessWidget {
  const PrimeiraJanela({ Key? key }) : super(key: key);
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text("Primeira Tela")
      ),
      body: Center(child: ElevatedButton(
        onPressed: (){
          Navigator.push(
            context,
            MaterialPageRoute(builder: (context) => SegundaJanela())
          );
        },
        child: const Text("Próxima Página")
        )
      ),
    );
  }
}
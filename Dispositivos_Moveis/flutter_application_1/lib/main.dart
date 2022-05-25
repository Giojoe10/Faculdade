import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter_application_1/homepage.dart';

void main(){
runApp(HomePage());
}



/*
class MyApp extends StatelessWidget{
  @override
  Widget build(BuildContext context){

    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text("Meu AppBar", textDirection: TextDirection.ltr,

          ),
      ),

      body:
      Row(
        mainAxisAlignment: MainAxisAlignment.spaceEvenly,
        children: <Widget>[
          Expanded(
            child: Text("Left column test!", textDirection: TextDirection.ltr,)
          ),
          Expanded(
            child: Text("Righ column test!", textDirection: TextDirection.ltr,)
          ),
          Expanded(
            child: FittedBox(
              fit: BoxFit.contain,
              child: FlutterLogo()
            )
          ),
            Expanded(
              child: ElevatedButton(
                onPressed: () {},
                child: Text(
                  "Button 1",
                  textDirection: TextDirection.ltr,
                  )
                )
              ),
            ],
      ),

      bottomNavigationBar: BottomAppBar(
        child: Container(
          height: 30.0,
          color: Colors.lightBlue,
          )
        ),
      ),
   );

  }

}

class MyApp2 extends StatelessWidget{
  const MyApp2({Key? key}) : super(key: key);
  @override
  Widget build(BuildContext context){
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text("Test: ")
          ),
        body: campoTexto()
          )
        );
  }

//Method that returns a TextField
  campoTexto(){
    return TextField(
      decoration: InputDecoration(border: InputBorder.none,
      icon: Icon(Icons.person),
      hintText: "Insert your name"
      )
    );
  }
}
*/
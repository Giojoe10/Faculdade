import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter_application_1/primeirajanela.dart';

class HomePage extends StatelessWidget{
  @override
  Widget build(BuildContext context) {
      return MaterialApp(
        title: "Giovanni's Flutter App",
        theme: ThemeData(primarySwatch: Colors.deepPurple),
        home: PrimeiraJanela(),
      );
  }
  



}
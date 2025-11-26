<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculadora de velocidade média</title>
</head>
<body>
  <form action="#">
    Distancia: <input type="number" name="distancia" value="10">km
    <br/>
    Tempo do percurso: <input type="number" name="tempoPercorrido" step="0.01" >horas
    <input type="submit" value="Calcular"/>
  </form>


<?php

//=============================================================================================
/* EXERCÍCIO: PEGAR O QUE FOI FEITO DE TAREFA E TUDO O QUE FOR AÇÃO, OU EXIBIR ETC...MUDAR 
 * PARA MÉTODO, CRIAR PELO MENOS UM MÉTODO PARA A CLASSE. TODOS OS CALCULOS DEVEM ESTAR DENTRO
 * DA CLASSE. 
 */
//=============================================================================================
class VelocidadeMedia {
    public float $distancia;
    public float $tempoPercorrido;
    public float $velocidade;
    public float $velocidadeConvertido;

    //um metodo que retorna o texto para apresentar para o usuario 
    public function calcularVelocidadeFormatado() : string
    {
      if ($this->tempoPercorrido > 0) {
        $this->velocidade = $this->distancia / $this->tempoPercorrido;
      }else{
        $this->velocidade = 0;
      }      
      return "<h3>Velocidade média: $this->velocidade km/h</h3>";
    }

    //um metodo que retorna o um valor float para ser usado nos cauculos
    public function calcularVelocidade() : float
    {
      if ($this->tempoPercorrido > 0) {
        $this->velocidade = $this->distancia / $this->tempoPercorrido;
      }else{
        $this->velocidade = 0;
      }      
      return  $this->velocidade;
    }
    //calcula a velocidade convertida e retorna float para usar dentro do outro metodo
    public function calcularVelocidadeConvertido() : float
    {
      $this->velocidadeConvertido = $this->calcularVelocidade() / 3.6;
      return $this->velocidadeConvertido;
    }
    // usar a funca/metodo anterior para exibição
    public function calcularVelocidadeConvertidoFormatado() : string
    {
      //inicia um variavel dentro do metodo com valor 0
      $velocidade = 0;
      //pegar o resultado da função e joga dentro da varial auxiliar
      $velocidade = $this->calcularVelocidadeConvertido();

      return "<h3>Velocidade média convertida: $velocidade m/s</h3>";
    }
}

$VelocidadeMedia = new VelocidadeMedia();
$VelocidadeMedia->distancia = $_GET['distancia'] ?? 0 ;
$VelocidadeMedia->tempoPercorrido = $_GET['tempoPercorrido'] ?? 0;

$VelocidadeMedia->velocidadeConvertido = $VelocidadeMedia->calcularVelocidade() / 3.6;

 echo "<h3>Distância percorrida: $VelocidadeMedia->distancia km</h3>"; 
 echo "<h3>Tempo do percurso: $VelocidadeMedia->tempoPercorrido h</h3>";
 echo  $VelocidadeMedia->calcularVelocidadeFormatado();
 echo $VelocidadeMedia->calcularVelocidadeConvertidoFormatado();
?>
</body>
</html>
<!DOCTYPE html>
<html>

<body>
    <style>
        * {
            font-family: Arial, Helvetica, sans-serif;
        }

        h3 {
            margin-bottom: 0px;

        }
    </style>

    <form action="#">
        <h1>Vamos criar um pessoa informe abaixo:</h1>
        <br />
        Nome: <input type="text" name="nomeCompleto" />
        <br />
        Altura: <input type="float" name="altura" /> em metros
        <br />
        Peso: <input type="float" name="peso" /> em kg
        <br />
        Idade: <input type="number" name="idade" /> em ano
        <br />
        Genero:
        <select type="select" name="genero">
        <option value="I">Indefinido</option>
        <option value="M">Masculino</option>
        <option value="F">Feminino</option>
        </select>
        <br />
        <input type="submit" />
    </form>


    <br /><br /><br />
    <div style='border: 10px solid #000; padding: 20px;'>

        <?php
        //---------------------------- definições ------------------
        //Classe é uma forma para objetos
        //Objeto é algo do mundo real que eu quero representar nom programa 
        class Pessoa
        {
            public string $nomeCompleto;
            public float $altura;
            public float $peso;
            public int $idade;
            public string $genero;

            // Método auxiliar recebe um parâmetro que é altura em metros.
            // Retorna multiplicado por 100 ou em cm.
            function converterMetrosEmCm (float $alturaMetro) : float {
                return $alturaMetro * 100;
            }
        }
        //---------------------------- main -------------------------
        //Criar o objeto $pessoa
        $pessoa = new Pessoa();
        //1 - $_GET['nomeCompleto']; pega algo do navegador, no caso nomeCompleto 
        //2 - Coloca na propriedade da $pessoa o nome 
        $pessoa->nomeCompleto = $_GET['nomeCompleto']  ?? 'Indefinido';
        //1 - $_GET['altura']; pega algo do navegador, no caso altura 
        //2 - Coloca na propriedade da $pessoa a altura 
        $pessoa->altura = $_GET['altura'] ?? 0;
        $pessoa->peso   = $_GET['peso'] ?? 0;
        $pessoa->idade  = $_GET['idade']  ?? 0;
        $pessoa->genero = $_GET['genero']  ?? 'Indefinido';

        $alturaEmCentimetros = $pessoa;

        echo ("<h2> Ficha cadastral: </h2>");
        //o echo retorna um texto para o html, ele transforma no visual, ai podemps usar HTML dentro do echo
        echo ("<h3> Nome:  $pessoa->nomeCompleto </h3> ");
        echo ("<h3> Altura:  $pessoa->altura metros - $alturaEmCentimetros cm</h3>");
        echo ("<h3> Peso:  $pessoa->peso kg </h3>");
        echo ("<h3> Idade:  $pessoa->idade anos</h3>");
        echo ("<h3> Genero:  $pessoa->genero </h3>");

        ?>
    </div>
</body>

</html>
<html>
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
    </head>
    <body>
        <style>
        
            *{
                font-family: Arial, Helvetica, sans-serif;
            
            }
            *{
                
                margin: 10px ;
            }
        </style>
    
        <form action= "#">
            <h1> Vamos customizar um Kart: </h1>
            <br/>
            Nome p/ o Kart: <input type= "text" name= "nomeKart" />
            <br/>
            Motor:
            <select type="select" name="motor">
                <option value="2T">Dois Tempos </option>
                <option value="4T">Quatro Tempos </option>
                <option value="E">Eletrico </option>
            </select>
            <br/>
            Pneus:
            <select type="select" name="pneus">
                <option value="H">Duro </option>
                <option value="M">Medio </option>
                <option value="S">Macio </option>
            </select>
            
            <h1> Agora o seu kit:</h1>
            <br/>
            Macacao:
            <select type="select" name="macacao">
                <option value="P">Pequeno </option>
                <option value="M">Medio </option>
                <option value="G">Grande </option>
            </select>
            <br/>
            Capacete:
            <select type="select" name="capacete">
                <option value="P">Pequeno </option>
                <option value="M">Medio </option>
                <option value="G">Grande </option>
            </select>
            <br/>
            Tenis: <input type="text" name="tenis" />
            <br/>
            <h1> Seu Peso:</h1>
            <br/>
            Peso:
            <select type="select" name="peso">
                <option value="Leve"> até 75Kg </option>
                <option value="Medio"> 77Kg/90Kg </option>
                <option value="Pesado"> 92Kg/100Kg </option>
                <option value="Super Pesado"> 102Kg/110Kg </option>
                <br/>
          <input type="submit" />
        </form>

        <br/><br/><br/>
        <div style='border: 10px double #000;
                padding: 10px ; 
                width: 500px;
                margin: 20px auto;'>
        <?php

        class Kart
        {
            public string $nomeKart;
            public string $motor;
            public string $pneus;
            public string $macacao;
            public string $capacete;
            public int $tenis;
            public string $peso;

			public function ex_nome () {
				return "<h4> Nome : $this->nomeKart; </h4> ";	
			}
			public function ex_motor(){
				return "<h4> Motor: $this->motor; </h4>";
			}
			public function ex_pneus(){
				return "<h4> Pneus: $this->pneus; </h4>";
			}
			public function ex_macacao(){
				return "<h4> Macacao: $this->macacao; </h4>";
			}
			public function ex_capacete(){
				return "<h4> Capacete: $this->capacete; </h4>";
			}
			public function ex_tenis(){
				return "<h4> Tenis: $this->tenis; </h4>";
			}
			public function ex_peso(){
				return "<h4> Peso: $this->peso; </h4>";
				
			}
        }
        
        $kart = new Kart();
        $kart -> nomeKart = $_GET['nomeKart'];
        $kart -> motor = $_GET['motor'];
        $kart -> pneus = $_GET['pneus'];
        $kart -> macacao = $_GET['macacao'];
        $kart -> capacete = $_GET['capacete'];
        $kart -> tenis = $_GET['tenis'];
        $kart -> peso = $_GET['peso'];
        
        echo ("<h2>🏎️💨 Kart:🏎️💨 </h2>");
        echo ( $kart->ex_nome());
        echo ( $kart->ex_motor());
        echo ( $kart->ex_pneus());
        echo ("<h2>🧥 Seu kit 🧢</h2>");
        echo ( $kart->ex_macacao());
        echo ( $kart->ex_capacete());
        echo ( $kart->ex_tenis());
        echo ("<h2> 💪 Sua Categoria: 📢 </h2>");
        echo ( $kart->ex_peso());

        ?>
    </div>
  </body>
</html>
<html>
    <form action="/index.php">
        <table>
            <tr>
                <td>Texto:</td>
                <td><input name="texto" type="text"></td>
            </tr>
            <tr>
                <td>Quantidade:</td>
                <td><input name="quantidade" type="number"></td>
            </tr>
             <tr>
                <td><input type="submit" value="Enviar"></td>
            </tr>
        </table>
    </form>
    <?php

        $text_preencher = $_GET['texto'];
        //pega parametros do navegador $_GET
        //pode ser qualquer coisa desde que esteja com o mesmo nome 
        //nesse caso: http://localhost:8000/?quantidade=11
        $quantidade = $_GET['quantidade'];

        //concatenação -- ESTUDAR/pesquisar
        echo "O usuario escolheu a letra: <strong>$text_preencher</strong> para preencher um numero: <strong>$quantidade</strong> vezes<br/><br/>";

        //percorre para linhas
        for ($i=0; $i < $quantidade; $i++) {
            //percorre para coluna 
            for ($i2=0; $i2 < $quantidade; $i2++) { 
                echo($text_preencher." ");
            }
            echo("<br/>");
        }
        

    ?>  
</html>
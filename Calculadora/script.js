function soma() {
    var num1 = parseFloat(document.getElementById ("n1").value) 
    var num2 = parseFloat(document.getElementById ("n2").value)
    var resp = document.getElementById ("resp_soma")

    //console.log (typeof num1, typeof num2)
    resp.textContent = num1 + num2
    
}

function subtrai () {
    var num1 = parseFloat(document.getElementById ("n3").value)
    var num2 = parseFloat(document.getElementById ("n4").value)
    var resp = document.getElementById ("resp_subtrai")

    resp.innerHTML = num1 - num2

}

function mult () {
    var num1 = parseFloat(document.getElementById ("n5").value)
    var num2 = parseFloat(document.getElementById ("n6").value)
    var resp = document.getElementById ("resp_mult")

    resp.innerHTML = num1 * num2

}

function dividir () {
    var num1 = parseFloat(document.getElementById ("n7").value)
    var num2 = parseFloat(document.getElementById ("n8").value)
    var resp = document.getElementById ("resp_div")

    
    
    resp.innerHTML = num1 / num2

    //condicional, que se o primeiro num digitado for === 0,
    // textContent = "Não existe divisão por 0"

}
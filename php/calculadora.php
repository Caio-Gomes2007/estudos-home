<?php
    class conta{
        private $num1;
        private $num2;
        private $result;
        function soma($num1,$num2){
            $this->num1 = $num1;
            $this->Num2 = $num2;
            $this-> result=$num1+$num2;
	    echo $this->result;
	    echo "\n";
        }
        function sub($num1,$num2){
            $this->num1 = $num1;
            $this->Num2 = $num2;
            $this-> result=$num1-$num2;
	    echo $this->result;
	    echo "\n";
        }function divi($num1,$num2){
            $this->num1 = $num1;
            $this->Num2 = $num2;
            $this-> result=$num1/$num2;
	    echo $this->result;
	    echo "\n";
        }function mult($num1,$num2){
            $this->num1 = $num1;
            $this->Num2 = $num2;
            $this-> result=$num1*$num2;
	    echo $this->result;
	    echo "\n";
        }

    }

$calculadora = new conta();
$calculadora->soma(2,2);
$calculadora->sub(5,4);
$calculadora->divi(9,9);
$calculadora->mult(10,3);

<?php

class ninja{
	protected $name;
	protected $idade;
	protected $aldeia;
	
	 function __construct($name,$idade,$aldeia){
		$this->name=$name;
		$this->idade=$idade;
		$this->aldeia=$aldeia;
	}


	function get_ninja(){
		return "Nome do ninja é " . $this->name . ",a idade é ". $this->idade ." e a sua aldeia é ". $this->aldeia; 
	}
}

class uchiha extends ninja{
	
	protected $nivelTomoe;

	function __construct($name,$idade,$aldeia,$nivelTomoe){
		parent::__construct($name,$idade,$aldeia);
		$this->nivelTomoe = $nivelTomoe;
	}	
	function Ativar_Sharingan(){
	
		if($this->nivelTomoe==4){
			echo "Mangekyou Sharingan Ativado";
		}else{	
			echo "Sharingan Ativado <br>";
		}
	}
	function Desativar_Sharingan(){
		echo "Sharingan Desativado <br>";
	}

}

	$naruto = new ninja("Naruto Uzumaki",16,"konoha");
	echo $naruto->get_ninja() . "<br>";
	$madara = new uchiha("Madara uchiha",30,"Konoha",4);
	echo $madara->get_ninja() . "<br>";
	$madara->Ativar_Sharingan();
	


?>


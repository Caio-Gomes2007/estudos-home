<?php

class ninja {
    protected string $nome;
    protected int $idade;
    protected string $aldeia;

    public function __construct($nome, $idade, $aldeia) {
        $this->nome = $nome;
        $this->idade = $idade;
        $this->aldeia = $aldeia;
    }

    public function get_All() {
        echo "O nome ninja é {$this->nome}, tem {$this->idade} anos e é de {$this->aldeia}.<br>";
    }
}

class Uchiha extends ninja {
    protected int $nivelTomoe;
    protected bool $poder1Quest;
    protected bool $poder2Quest;
    protected string $poder1;
    protected string $poder2;

    public function __construct($nome, $idade, $aldeia, $nivelTomoe, $poder1Quest, $poder2Quest) {
        parent::__construct($nome, $idade, $aldeia);
        $this->nivelTomoe = $nivelTomoe;
        $this->poder1Quest = $poder1Quest;
        $this->poder2Quest = $poder2Quest;
        $this->poder1 = "Amaterasu"; // Defina o valor padrão para o poder1
        $this->poder2 = "Tsukuyomi"; // Defina o valor padrão para o poder2
    }

    public function AtivarSharingan() {
        if ($this->nivelTomoe == 4) {
            echo "Mangekyou Sharingan ativado<br>";
        } elseif ($this->nivelTomoe >= 5) {
            echo "Mangekyou Sharingan eterno ativado<br>";
        } elseif ($this->nivelTomoe <= 3) {
            echo "Sharingan ativado<br>";
        }
    }

    public function DesativarSharingan() {
        if ($this->nivelTomoe == 4) {
            echo "Mangekyou Sharingan desativado<br>";
        } elseif ($this->nivelTomoe >= 5) {
            echo "Mangekyou Sharingan eterno desativado<br>";
        } elseif ($this->nivelTomoe <= 3) {
            echo "Sharingan desativado<br>";
        }
    }

    public function AtivarSusano() {
        if ($this->nivelTomoe == 4) {
            echo "Susano ativado<br>";
        } elseif ($this->nivelTomoe >= 5) {
            echo "Susano completo ativado<br>";
        } elseif ($this->nivelTomoe <= 3) {
            echo "Susano não habilitado ainda<br>";
        }
    }

    public function AtivarPoder1() {
        if ($this->poder1Quest) {
            if ($this->nivelTomoe > 4) {
                echo "{$this->poder1} ativado<br>";
            } elseif ($this->nivelTomoe <= 3) {
                echo "Poder ainda não habilitado<br>";
            }
        } else {
            echo "Não tem poder1<br>";
        }
    }

    public function AtivarPoder2() {
        if ($this->poder2Quest) {
            if ($this->nivelTomoe > 4) {
                echo "{$this->poder2} ativado<br>";
            } elseif ($this->nivelTomoe <= 3) {
                echo "Poder ainda não habilitado<br>";
            }
        } else {
            echo "Não tem poder2<br>";
        }
    }

    public function set_poder1($poder1){
	$this->poder1 =$poder1;
    }public function set_poder2($poder2){
	$this->poder2 =$poder2;
    }




}

// Exemplo de uso
$Madara = new Uchiha("Madara Uchiha", 150, "Konoha", 5, false, false);
$Madara ->get_All();
$Madara->AtivarSharingan();
$sasuke = new Uchiha("Sasuke Uchiha",30,"konoha",5,true,false);
$sasuke->get_All();
$sasuke->set_poder1("Amateratsu");
$sasuke->AtivarPoder1();
$sasuke->AtivarSusano();

?>

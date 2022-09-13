# incluir  < iostream >
utilizando el espacio de  nombres  estándar ;

int  principal (){
	int numeros[ 100 ];
	
	para ( int i = 0 ; i < 100 ; i++){
		if (i % 3 == 0 ){ numeros[i] = i; }
	}
	para ( int i = 0 ; i < 100 ; i++){
		if (i % 3 == 0 ) { cout << numeros[i] << endl; }
	}
	devolver  0 ;
}

#include <stdio.h>
#include "main.h"
#include "alumno.h"


int main(void) {
	static const struct alumno_s alumno={
		.apellido = 'ARAOZ',
		.nombre = 'GONZALO',
		.documento = '23116984'
	};
	
	nombre(&alumno);
	return 0;
}
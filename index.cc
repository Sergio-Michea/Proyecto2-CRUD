/* Estilos base para la tabla */
.table {
    width: 100%;
    border-collapse: collapse;
}

.table th, .table td {
    text-align: left;
    padding: 8px;
    border: 1px solid #ddd; /* Color de borde ligero para mejorar la legibilidad */
}

/* Hacer la tabla responsiva */
@media screen and (max-width: 768px) {
    .table {
        display: block;
        overflow-x: auto; /* Permite el scroll horizontal en pantallas pequeñas */
    }

    .table thead {
        display: none; /* Oculta el encabezado en dispositivos pequeños para ahorrar espacio */
    }

    .table, .table tbody, .table tr, .table td {
        display: block;
        width: 100%;
    }

    .table tr {
        margin-bottom: 15px;
    }

    .table td {
        text-align: right;
        padding-left: 50%; /* Asegura que el texto no se amontone */
        position: relative;
    }

    .table td::before {
        /* Usa los atributos de datos para los títulos */
        content: attr(data-title);
        position: absolute;
        left: 0;
        top: 0;
        text-align: left;
        padding-right: 10px;
        font-weight: bold;
    }
}
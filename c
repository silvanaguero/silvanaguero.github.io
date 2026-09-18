/* Portafotos: Borde de color */
img.foto {
  border-radius: 50%;
  border: 6px solid #881280;
}

/* Efecto: Se colorea (al pasar el mouse) */
img.foto {
  filter: grayscale(1);
  transition: filter 0.4s;
}
img.foto:hover {
  filter: none;
}

document.addEventListener('DOMContentLoaded', () => {
    const form = document.querySelector('form');
    const usuarioInput = document.getElementById('usuario');
    const contrasenaInput = document.getElementById('contrasena');
  
    form.addEventListener('submit', (e) => {
      e.preventDefault(); // Evita que se recargue la página
  
      const usuario = usuarioInput.value.trim();
      const contrasena = contrasenaInput.value.trim();
  
      // Validación básica
      if (usuario === '' || contrasena === '') {
        alert('Por favor, completa todos los campos.');
        return;
      }
  
      // Usuario y contraseña de prueba (simulado)
      const usuarioValido = 'admin';
      const contrasenaValida = '1234';
  
      if (usuario === usuarioValido && contrasena === contrasenaValida) {
        alert('¡Ingreso exitoso!');
        // Redirigir o continuar
        // window.location.href = 'pagina-principal.html';
      } else {
        alert('Usuario o contraseña incorrectos.');
      }
    });
  });
  
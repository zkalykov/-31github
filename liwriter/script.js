 ///// blurr screen box'

      // Get the modal and button elements
    const modals = document.querySelectorAll('.modal');
    const openButtons = document.querySelectorAll('.openButton');
    const closeButtons = document.querySelectorAll('.close');
    const overlay = document.getElementById("overlay");

    // Function to open the modal
    function openModal(index) {
      modals[index].style.display = "block";
      overlay.style.display = "block";
    }

    // Function to close the modal
    function closeModal(index) {
      modals[index].style.display = "none";
      overlay.style.display = "none";
    }

    // Event listeners for open buttons
    openButtons.forEach((button, index) => {
      button.addEventListener("click", () => {
        openModal(index);
      });
    });

    // Event listeners for close buttons
    closeButtons.forEach((button, index) => {
      button.addEventListener("click", () => {
        closeModal(index);
      });
    });    

    ///// end

    //// loading 
      window.addEventListener('beforeunload', function() {
      var loader = document.getElementById('loader');
      loader.style.display = 'block';
      loader.style.width = '0%';

      // Simulate the loading progress for demonstration purposes
      var progress = 0;
      var interval = setInterval(function() {
        progress += 5;
        loader.style.width = progress + '%';

        if (progress >= 1000) {
          clearInterval(interval);
          loader.style.display = 'none';
        }
      }, 500);
    });

      window.addEventListener('load', function() {
      var loader = document.getElementById('loader');
      loader.style.width = '0%';

      // Simulate the loading progress for demonstration purposes
      var progress = 0;
      var interval = setInterval(function() {
        progress += 10;
        loader.style.width = progress + '%';

        if (progress >= 100) {
          clearInterval(interval);
          loader.style.display = 'none';
        }
      }, 100);

      loader.style.display = 'block';
    });



    ////



    /// make equals two inputs: starts
    const divInput = document.getElementById('input');

    const hiddenInput = document.getElementById('hiddenInput');

    // Add event listener for input changes in the div element
    divInput.addEventListener('input', function() {
      hiddenInput.value = divInput.innerText;
    });
    /// make equals two inputs:ends






     function toggleDarkMode() {
        const body = document.querySelector("body");
        body.classList.toggle("dark-mode");
        // Store the user's preference in localStorage
        localStorage.setItem("darkMode", body.classList.contains("dark-mode"));
      }

      // Function to check and set dark mode based on user's preference
      function checkDarkModePreference() {
        const body = document.querySelector("body");
        const darkModePreference = localStorage.getItem("darkMode");
        if (darkModePreference === "true") {
          body.classList.add("dark-mode");
        }
      }

      // Call the checkDarkModePreference function when the page loads
      document.addEventListener("DOMContentLoaded", checkDarkModePreference);





    function countWords() {
  const inputDiv = document.getElementById("input");
  const text = inputDiv.innerText;
  const wordCount = text.trim().split(/\s+/).filter(word => word !== "").length; // Filter out empty words
  const charCount = text.length;
  const wordCountContainer = document.getElementById("word-count");
  wordCountContainer.innerHTML = `${wordCount} word${wordCount !== 1 ? "s" : ""}, ${charCount} character${charCount !== 1 ? "s" : ""}`;
}





   

    document.getElementById("input").addEventListener("input", countWords);

  window.addEventListener('DOMContentLoaded', function() {
    var imageElement = document.querySelector('img[src="https://cdn.000webhost.com/000webhost/logo/footer-powered-by-000webhost-white2.png"]');
    if (imageElement) {
      imageElement.style.display = 'none';
    }
  });

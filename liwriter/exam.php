<?php
if(!empty($_POST['text'])){


$api_key = "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";

$text = $_POST['text'];
$task="
You are IELTS and TOEFL essays checker, you have to check essay and give exactly score according to rule how to evalueate essays, use <p></p> :
'some text' after reading this, you say for example 'IELTS score: (0-9) & TOEFL score (0-30) e.t.c'

After showing points, break line.
and give some suggestions
and give suggestions and explain why you gave that score;
and say 5 suggestion sentences to change ...





USER:";

$prompt=$task. " ".$text;


// The number of tokens to generate
$max_tokens = 2048;
// Set the temperature of the model to 0.5 for more precise answers
// 0.3 is best for exact reponds
$temperature = 0.3;
// Set the model to GPT-3's 175B parameter version for advanced capabilities
$model = "text-davinci-002";

// Create a new cURL resource
$ch = curl_init();
// Set the options
curl_setopt($ch, CURLOPT_URL, "https://api.openai.com/v1/engines/".$model."/completions");
curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
curl_setopt($ch, CURLOPT_POST, 1);
$data = array(
    'prompt' => $prompt,
    'temperature' => $temperature,
    'max_tokens' => $max_tokens,
    'stop' => ['\n']
);
curl_setopt($ch, CURLOPT_POSTFIELDS, json_encode($data));
curl_setopt($ch, CURLOPT_HTTPHEADER, array(
    'Content-Type: application/json',
    'Authorization: Bearer ' . $api_key
));
// Execute the request
$output = curl_exec($ch);
// Close the cURL resource
curl_close($ch);
$output = json_decode($output, true);
// Get the first answer in the "choices" array and display it on the website
if(isset($output["choices"][0]["text"])) {
    $answer = $output["choices"][0]["text"];
    ///echo extractHTMLContent($answer);
} else {
    echo "Error: No answer found.";
}
}
?>


<!DOCTYPE html>
<html>
<head>
  <title>Liwriter - IELTS & TOEFL</title>
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=0">
  <style>
    * {
      box-sizing: border-box;
      margin: 0;
      padding: 0;
    }

    body {
      font-family: 'Helvetica Neue', Arial, sans-serif;
      background-color: #f1f1f1;
      transition: background-color 0.3s ease;
    }

    .container {
      display: flex;
      width: 100%;
      min-height: 100vh;
      padding: 20px;
      box-sizing: border-box;
      overflow: hidden;
      text-align: center;
    }


    .input-container {
      flex: 3;
      background-color: #fff;
      padding: 20px;
      margin-right: 20px;
      border-radius: 8px;
      box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
      overflow-y: fixed;
      max-height: calc(100vh - 40px);
    }

    .input-container h1 {
      
      font-size: 32px;
      color: #333;
    }

    .input-container .input {
      text-align: left;
      width: 100%;
      height: 90%;
      border: none;
      outline: none;
      font-size: 20px;
      padding: 10px;
      resize: none;
      font-family: 'Helvetica Neue', Arial, sans-serif;
      min-height: 300px;
      color: #333;
      background-color: #f7f7f7;
      overflow-y: auto;
    }

    .mistakes-container {
      flex: 1;
      background-color: #fff;
      padding: 20px;
      overflow-y: auto;
      border-radius: 8px;
      
      max-height: calc(100vh - 40px);
    }

    .mistake {
      margin-bottom: 10px;
      box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
      padding: 10px;
      border-radius: 8px;
      

      transition: all 0.3s ease-in-out;
    }

    .mistake:hover {
      transform: scale(1.01);
    }

    .mistake p {
      margin-bottom: 5px;
      font-size: 16px;
      color: #333;
    }

    .error {
      color: #d32f2f;
      background-color: #ffe7e7;
    }

    .tool-container {
      flex: 0.2;
      background-color: #fff;
      padding: 2px;
      margin-right: 20px;
      border-radius: 8px;
      border-radius: 8px;
      box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
      max-height: calc(100vh - 40px);

      

    }

    .profile {
      width: 100%;
      height: auto;
      padding: 1px;
      cursor: pointer;
      border-radius: 50%;
      transition: all 0.3s ease-in-out;


    }

    .profile:hover {
      transform: scale(1.5);
    }

    .navbuttons {
      width: 70%;
      height: auto;
      padding: 2px;
      border-radius: 8px;
      
      cursor: pointer;
      transition: all 0.3s ease-in-out;

      padding-top:30%;
      padding-bottom: 30%;
    }

    .navbuttons:hover {
      transform: scale(1.5);
    }
    .checkbuttons {
      
      cursor: pointer;
      transition: all 0.3s ease-in-out;
    }

    .checkbuttons:hover {
      transform: scale(1.5);
    }

    .arrow {
        width: 20px;
        padding-top: 2px;
    }
    .footer{
      display: none;
    }



    /* Dark mode styles */
    body.dark-mode {
      background-color: #333;
    }

    body.dark-mode .container {
      background-color: #444;
    }

    body.dark-mode .input-container,
    body.dark-mode .mistakes-container,
    body.dark-mode .tool-container {
      background-color: #555;
      box-shadow: 0 2px 4px rgba(255, 255, 255, 0.1);
    }

    body.dark-mode .input-container h1,
    body.dark-mode .mistake p {
      color: #eee;
    }

    body.dark-mode .input,
    body.dark-mode .mistake,
    body.dark-mode {
      color: #eee;
      background-color: #222;
    }
    body.dark-mode .navbuttons,
    body.dark-mode .checkbuttons,
    body.dark-mode .arrow{
      filter: invert(1);
    }

    .word-count{
      padding: 2px;
      font-size: 12px;
    }
    #loader {
  width: 100%;
  height: 4px;
  background-color: lightblue;
  position: fixed;
  top: 0;
  left: 0;
  display: none;
  transition: width 0.3s ease-out;
}

  .modal {
      display: none;
      position: fixed;
      z-index: 9999;
      width: 500px;
      max-width: 90%;
      top: 50%;
      left: 50%;
      transform: translate(-50%, -50%);
      background-color: white;
      padding: 20px;
      border-radius: 20px;
      box-shadow: 0 2px 8px rgba(0, 0, 0, 0.2);
      opacity: 0;
      animation: fadeIn 0.3s ease forwards;
    }

    @keyframes fadeIn {
      0% {
        opacity: 0;
      }
      100% {
        opacity: 1;
      }
    }

    .overlay {
      display: none;
      position: fixed;
      z-index: 9998;
      top: 0;
      left: 0;
      width: 100%;
      height: 100%;
      background-color: rgba(0, 0, 0, 0.5);
      backdrop-filter: blur(5px);
    }

    .modal-content {
      margin-top: 20px;
    }

    .close {
      position: absolute;
      top: 10px;
      right: 10px;
      font-size: 40px;
      font-weight: bold;
      color: #888;
      cursor: pointer;
    }

    .modal-content h2 {
      font-size: 20px;
      margin-bottom: 10px;
      color:black;
    }

    .modal-content p {
      margin-bottom: 20px;
      color:black;
    }

    button {
      outline: none;
      margin: 0;
      padding: 0;
      background: none;
      border: none;
      cursor: pointer;
    }




@media screen and (max-width:800px) {
    

  .tool-container{
      
      background-color: #fff;
      position: fixed;
      bottom: 0;
      left: 0;

      width: 100%;
      height: 50px;

      float: left;


      border-radius: 8px;
      padding: 0px;
      justify-items: space-between;

      box-shadow: 0 2px 4px rgba(100, 100, 0, 0.1);


      
  }
  .profile {
      display: none;
    }

    .navbuttons {
      width: auto;
      
      border-radius: 50%;
      height: 100%;
      padding: 6px;
      cursor: pointer;
      border-radius: 8px;
      transition: all 0.3s ease-in-out;

    }

    .navbuttons:hover {
      transform: scale(0.8);
    }







    .container {
      display:block;
      width: 100% ;
      min-height: 100vh;
      padding: 0%;
      box-sizing: border-box;
      overflow: vertical;
      text-align: center;

    }


    .input-container {
      flex: none;
      background-color: #fff;
      padding: 20px;
      margin-right: 0px;
      border-radius: 8px;
      box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
      overflow-y: auto;
      max-height: calc(100vh - 40px);
    }

    
    .input-container h1 {
      
      font-size: 32px;
      color: #333;
    }

    .input-container .input {
      width: 100%;
      height: 100%;
      border: none;
      outline: none;
      font-size: 20px;
      padding: 10px;

      resize: none;
      font-family: 'Helvetica Neue', Arial, sans-serif;
      height: 430px;
      color: #333;
      background-color: #f7f7f7;

      overflow-y: vertical;
    }

    .mistakes-container {
      flex: none;
      background-color: #fff;
      padding: 10px;
      overflow-y: auto;
      border-radius: 8px;
      
      max-height: calc(100vh - 0px);
    }

    .mistake {
      margin-bottom: 10px;
      box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);
      padding: 10px;
      border-radius: 8px;
      

      transition: all 0.3s ease-in-out;
    }

    .mistake:hover {
      transform: scale(1.01);
    }

    .mistake p {
      margin-bottom: 5px;
      font-size: 16px;
      color: #333;
    }

    .arrow{
      display: none;
    }




    .footer{
      display: block;
    }

}


  </style>
</head>
<body>
     <div id="loader"></div>


  <div class="container">

    <div class="tool-container">
        <img class="profile" src="logo.png">
      
        <a href="index.html"> <img class="navbuttons" src="home.png"></a>
        
        <a href="edit.php"><img class="navbuttons" src="editing.png"></a>
        
        <a href="exam.php"><img class="navbuttons" src="eng.png"></a>
        
        <a href="#"class="openButton"><img class="navbuttons" src="feedback.png"></a>
        
        <a href="#"class="openButton"><img class="navbuttons" src="settings.png"></a>
        
        <a href="#"><img id="modeToggle" class="navbuttons" src="mode.png" onclick="toggleDarkMode()"></a>
        
      
    </div>

    <div class="input-container">
      <h1 style="display: flex; align-items: center;">
        IELTS & TOEFL essay checker

        <form method="post" style="margin-left: auto;">
          <input id="hiddenInput" type="hidden" name="text" value="<?php if(!empty($prompt)) { echo htmlspecialchars($text);} ?>">
          <button id="seachButton"style="background: none; border: none; padding: 0; margin-left: 10px;">
            <img class="checkbuttons"style="width: 40px;" src="search.png" title="check">
          </button>

        </form>
      </h1>

        <div id="input" contenteditable="true" class="input" name="input"><?php if(!empty($prompt)) {echo nl2br(htmlspecialchars($text));} ?></div>

        


      <div class="word-count"id="word-count"></div>
    </div>

    <div class="mistakes-container" id="mistakes-container">
      <p class="mistake">
      
      <?php if(empty($answer)) { ?>
       <img class="arrow" src="arrow.png"> click there to check your text
      <?php } 
      else { 
        echo $answer;
      } ?>
      </p>

    </div>


  </div>


  <div id="modal1" class="modal">
    <span class="close">&times;</span>
    <div class="modal-content">
      <h2>Liwriter</h2>
      <p>Thank you for using our app.</p>
      
    </div>
  </div>

  <div id="modal2" class="modal">
    <span class="close">&times;</span>
    <div class="modal-content">
      <h2>Liwriter</h2>
      <p>By using our app you are agree with our terms and conditions.</p>
      <p>All rights reserved.</p>
      
      
    </div>
  </div>

  <div id="overlay" class="overlay"></div>



  <div class="footer"><br><br><br><br><br></div>
  
 <script src="script.js"></script>
</body>
</html>

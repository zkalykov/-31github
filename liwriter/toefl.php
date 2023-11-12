<?php




if(!empty($_POST['text'])){
// Replace YOUR_API_KEY with your actual API key
$api_key = "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";
// Get the user's prompt/question from the website form
$text = $_POST['text'];
$task="
You are TOEFL essays checker, you have to check essay and give exactly score according to rule how to evalueate essays, use <p></p> :
'some text' after reading this, you say for example 'TOEFL score: (give exact score from 0 to 30) '


After showing points, break line.
and give some suggestions
and give suggestions and explain why you gave that score;
and say 5 suggestion sentences to change ...


And in the end, add, where he or she made a mistake and what is true one. if it is grammer mistakes.

note: use <br> code to break lines after parapgaph you provided.



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
  <title>Liwriter - English Grammar Checker</title>
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=0">
  <link rel="icon" href="off_logo.png" type="image/png">
  <link rel="stylesheet" href="page_style.css">
</head>
<body>
     <div id="loader"></div>


  <div class="container">

    <div class="tool-container">
        
      
        <a href="index.html"> <img class="navbuttons" src="home.png"></a>
        
        <a href="edit.php"><img alt="GRAMMER CHECK"class="navbuttons" src="editing.png"></a>
        <a href="ielts.php"><img class="navbuttons" src="ielts.png"></a>        
        <a href="toefl.php"><img alt="TOEFL ESSAY CHECKER"class="navbuttons" src="toefl.png"></a>


        
        
        
        <a href="#"><img id="modeToggle" class="navbuttons" src="mode.png" onclick="toggleDarkMode()"></a>
        
      
    </div>

    <div class="input-container">
      <h2 style="padding-bottom: 10px;">TOEFL</h2>

        <div id="input" contenteditable="true" class="input" name="input"><?php if(!empty($prompt)) {echo nl2br(htmlspecialchars($text));} ?></div>


        <form method="post" style="margin-left: auto;">
          <input id="hiddenInput" type="hidden" name="text" value="<?php if(!empty($prompt)) { echo htmlspecialchars($text);} ?>">
          <button class="checkbuttons" id="seachButton"style="background: none; border: none; padding: 0; margin-left: 10px;">
            <p>Check</p>
          </button>

        </form>

        


      <div class="word-count"id="word-count"></div>
    </div>

    <div class="mistakes-container" id="mistakes-container">

      
      <img style="width: 100px;"src="off_logo.png">
      <?php if(empty($answer)) { ?>
      <div class="mistake"> 
        <img src="toefl_photo.jpg" style="height:auto;width:250px;">
          <h3>Tips for to check your TOEFL essay :</h3><br>

          <li>Click check button to check your essay</li><br>
          <li>Click check button to check your essay</li><br>
          <li>It is free TRIAL version, if there is some bugs, please let us to know at gec-faq@gmail.com</li><br>
          <li>Be warned it may give incorrect answer becuase it is starting version.</li>
      </div>
      <?php } 
      else { 
        ?> 
<br><br><br><br>
      <p class='mistake'>
        <?php
        echo $answer;
      } ?></p>

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

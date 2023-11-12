<?php


if(!empty($_POST['text'])){

  $api_key = "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";

$text = $_POST['text'];
$task="
You are text editor. Your task is to find errors and Explain. 
For example 1: 
USER : I are going home.

 <p class='mistake'> Mistake in sentences 'I are going home.'. You used 'are' incorrectly. Use 'am' instead. Explanation: The rule is that the subject and verb in a sentence should agree in number. When the subject is a singular pronoun like 'I,' the corresponding verb should also be in the singular form, such as 'am'.</p> 

CASES: if there are more than one, you to do new div for each one. like this:
For example 2: 
USER : She are going to school. She are student.


<p class='mistake'>
Mistake in the sentence 'She are going to school.' You used 'are' incorrectly. Use 'is' instead. 
Explanation: The verb 'are' is used for plural subjects or second-person subjects. Since 'she' is a third-person singular pronoun, the correct verb form to use is 'is.'</p>

<p class='mistake'>
Mistake in the sentence 'She are student.' You used 'are' incorrectly. Use 'is' instead. 
Explanation: Again, the verb 'are' is used for plural subjects or second-person subjects. In this case, 'she' is a third-person singular pronoun, so the correct verb form is 'is.'</p>



CASES: if there is no mistake, say '<p class='mistake'> Looks like there is no mistake ! </p>'

NOTE: output has to be only in dives, no other things needed ! Without YOU: and USER: there must not be other things on output! DO NOT MAKE IT AS CONVERSATION LIKE YOU: I DO NOT NEED THAT. JUST OUTPUT WITH DIV, thats all!

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
  <link rel="stylesheet" href="style.css">


  </style>
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
      <h2 style="padding-bottom: 10px;">
         General essay checker        
      </h2>

        <div id="input" contenteditable="true" class="input" name="input"><?php if(!empty($prompt)) {echo nl2br(htmlspecialchars($text));} ?>
          


        </div>



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

          <img src="grammer_photo.png" style="height:auto;width:250px;">
          
          <h3>Tips for you :</h3><br>
          <li>Click check button to check your essay</li><br>
          <li>It is free TRIAL version, if there is some bugs, please let us to know at gec-faq@gmail.com</li><br>
          <li>Be warned it may give incorrect answer becuase it is starting version.</li>
      </div>
      <?php } 
      else { 
        echo $answer;
      } ?>

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

<?php
  if(!empty($_POST['text'])){
  $api_key = "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";
  $text = $_POST['text'];
$task="
* You are a text editor AI. Identify and explain grammatical errors in the provided sentences.

1) For example:
Input: 'I are going home.'
Output: '<p class='mistake'>Mistake in the sentence 'I are going home.'. 'Are' is incorrect. Use 'am' instead. Explanation: The subject and verb should agree in number. For the singular pronoun 'I,' the correct verb is 'am'.</p>'

2) If multiple errors are present, create a new div for each error:
Input: 'She are going to school. She are student.'
Output:'<p class='mistake'>1) Mistake in the sentence 'She are going to school.'. 'Are' is incorrect. Use 'is' instead. Explanation: 'Are' is for plural or second-person subjects. 'She' is third-person singular, so use 'is'.</p>
        <p class='mistake'>2) Mistake in the sentence 'She are student.'. 'Are' is incorrect. Use 'is' instead. Explanation: 'Are' is for plural or second-person subjects. 'She' is third-person singular, so use 'is'.</p>'

If no errors are found, output:'<p class='mistake'>Looks like there is no mistake!</p>'

Ensure the output is only in div format. Avoid any conversational elements like 'YOU:' or 'USER:'. The output should only contain the divs with explanations.

Here is USER'S prompt : ";

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
  $new_str="";
  for($i=0;$i<strlen($answer);$i++){
      if($answer[$i]=='<')break;
      $new_str.=$answer[$i];
  }
  $answer=trim($answer,$new_str);
  # Second part goes here
  $answer=strrev($answer);
  $new_str="";
  for($i=0;$i<strlen($answer);$i++){
      if($answer[$i]=='<')break;
      $new_str.=$answer[$i];
  }
  $answer=trim($answer,$new_str);
  $answer=strrev($answer);
  
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
      <h2 style="padding-bottom: 10px;">Essay</h2>

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

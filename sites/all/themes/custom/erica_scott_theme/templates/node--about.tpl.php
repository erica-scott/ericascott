<?php
/**
 * @file
 * Implements theme for about page.
 */
?>
<div>
	<div style="width:45%; float:left; display:inline-block;">
		<br>
		<?php print '<span style="font-weight:bold; font-size:25px;">' . render($content['field_name']) . '</span>'; ?>
		<br>
		<?php print render($content['body']); ?>
	</div>
	<div style="margin-left:200px;">
		<?php print render($content['field_photo']); ?>
	</div>
</div>

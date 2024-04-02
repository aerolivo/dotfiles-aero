#   Configuration script for build latex

#   set previewer
#$pdf_previewer = 'start xdg-open %S';
$pdf_previewer = 'xdg-open %S';

#   to enable shell-escape for all latex commands
set_tex_cmds( '--shell-escape %O %S');

#   set default tex file
@default_files = ('main.tex');

#   set build directory
#$out_dir = '_out';

#   The next lines are the original ones from source
#
#$pdf_previewer='zathura';
#$pdflatex='xelatex -synctex=1 %0 %S'
#@generated_exts=(@generated_exts, 'synctex.gz');


#   Compilation with Xelatex
#$pdflatex='xelatex -synctex=1 %0 %S';
#$pdflatex="xelatex %O %S";
#$lualatex="lualatex %O %S";      

#   use lualatex for compilation
$pdf_mode = 1;
$pdflatex = 'lualatex -synctex=1 %O %S';
#$pdflatex = 'pdflatex -synctex=1 %O %S';

#   Enable shell escape
$shell_escape = 1;

#   Set the number of times to run the compilation to resolve cross-references
$max_repreat = 5;

#   Specify the bibliography tool if needed
#$bibtex = 'biber %O --bblenconding=utf8 -u -U --output_safechars %B';

#   axodraw automation
add_cus_dep( "ax1", "ax2", 0, "axohelp");
sub axohelp {return system "axohelp \"$_[0]\"";}


# rename pdf after a success build 
$success_cmd = 'mv main.synctex.gz build.synctex.gz && mv main.bbl refs.bbl';
#$success_cmd = 'mv main.synctex.gz build.synctex.gz && mv main.bbl refs.bbl && mv main.log build.log && mv main.aux build.aux && mv *.pdf out.pdf';

#$clean_ext . = " %R.ax1 %R.ax2;"
$clean_ext = "ax1 ax2 %R.ax1 %R.ax2";
#$clean_ext = 'aux bbl blg log lof lot out toc fls fdb_latexmk synctex.gz ax1 ax2 %R.ax1 %R.ax2';



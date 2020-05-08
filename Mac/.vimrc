
"   vim-plug {{

    " Specify a directory for plugins
    " - For Neovim: stdpath('data') . '/plugged'
    " - Avoid using standard Vim directory names like 'plugin'
    call plug#begin('~/.vim/plugged')

    " Make sure you use single quotes
    Plug 'lervag/vimtex' 
    let g:tex_flavor='latex'
    let g:vimtex_view_method='skim'
    let g:vimtex_quickfix_mode=0
    set conceallevel=1
    let g:tex_conceal='abdmg'


    Plug 'Rigellute/shades-of-purple.vim'

    "Plug 'sirver/ultisnips'
    "let g:UltiSnipsExpandTrigger = '<tab>'
    "let g:UltiSnipsJumpForwardTrigger = '<tab>'
    "let g:UltiSnipsJumpBackwardTrigger = '<s-tab>'
    "let g:UltiSnipsEditSplits='vertical'


    "    file system explorer for the Vim editor
    Plug 'preservim/nerdtree'


    " Initialize plugin system
    call plug#end()

"   }}


filetype plugin indent on    " required


" NerdTree {
let g:NERDTreeWinPos="right"
" } 

" ·························································
source $VIMRUNTIME/defaults.vim

set tabstop=4       " The width of a TAB is set to 4.
                    " Still it is a \t. It is just that
                    " Vim will interpret it to be having
                    " a width of 4.

set shiftwidth=4    " Indents will have a width of 4

set softtabstop=4   " Sets the number of columns for a TAB

set expandtab       " Expand TABs to spaces

" Set Line Numbers
set number
set nuw=4

"set relativenumber
set cursorline

set cursorlineopt=number

set autoindent
filetype plugin indent on

set textwidth=125

" Color of the Line Numbers
highlight LineNr cterm=NONE ctermfg=DarkGrey ctermbg=NONE gui=NONE guifg=DarkGrey guibg=NONE

" Current line number highlighted
highlight CursorLineNr cterm=bold ctermfg=Red

" colorscheme
colorscheme shades_of_purple


" Word processor { 
    func! WordProcessorMode()
        setlocal textwidth=120
        setlocal smartindent
        setlocal spell spelllang=en_gb,es
        setlocal noexpandtab
    endfu

    com! WP call WordProcessorMode()
" }

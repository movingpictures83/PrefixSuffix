# Language: C++
# Input: FASTA
# Output: Directory
# Tested with: PluMA 1.0, GCC 4.8.4

PluMA plugin to cluster a set of sequences using Qiime's prefix/suffix algorithm (Caporaso et al, 2010).

The plugin accepts as input a FASTA file of sequences and the output will be a directory,
into which the plugin will deposit an OTUs file (*.txt).  This 
will be automatically copied into the parent folder as well for testing purposes.

Note: This plugin works with Qiime 1, which is only compatible with Python 2.  Since PluMA has been
upgraded to use Python 3, you must set the following two environment variables for this to work:

PYTHON2_SITE_PACKAGES
PYTHON2_DIST_PACKAGES

This way the Python 2 environment can be loaded and unloaded properly at runtime.

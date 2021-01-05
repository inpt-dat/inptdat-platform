# INPTDAT

The INterdisciplinary Plasma Technology DATa platform INPTDAT is an open source research data repository build on top of the Open Data Platform [DKAN](https://getdkan.org). Instances of INPTDAT are currently operated by [Leibniz Institute for Plasma Science and Technology (INP)](https://www.inptdat.de) and the [Research Department Plasmas with Complex Interactions](https://rdpcidat.rub.de) at Ruhr-Universität Bochum.

## Features

INPTDAT extends the fully made [Drupal 7 version of DKAN](https://github.com/GetDKAN/dkan-drops-7) by the following features:

* Addition of plasma specific metadata fields to the dataset content type for implementation of the plasma metadata schema, Plasma-MDS. 
* Plasma specific topics for thematic selection of content.

INPTDAT may be used as a basis for other institutional repositories to support the publication and linking of research data in the plasma community in accordance with unified (meta)data models supporting the [FAIR Data Principles](https://www.go-fair.org/fair-principles/) and data driven plasma science. Individual research data repositories implementing the plasma metadata schema, Plasma-MDS and providing appropriate APIs for metadata harvesting will be linked together at the central INPTDAT instance at https://www.inptdat.de.

## Installation

The installation of the data platform is analogous to the installation of DKAN. Hence, follow these steps to deploy INPTDAT:

* Create the database following the [Drupal standard procedure](https://www.drupal.org/docs/7/install/step-2-create-the-database).
* Download or clone the INPTDAT repository.
* Follow the [DKAN base installation](https://dkan.readthedocs.io/en/latest/installation/basic.html#installation) instructions to install INPTDAT.

### Upgrading INPTDAT

Follow the [DKAN basic upgrade](https://dkan.readthedocs.io/en/latest/introduction/maintaining.html#basic-upgrades) instructions to update INPTDAT. The INPTDAT specific code is maintained separated from the DKAN base code in the `sites` folder to avoid overwriting. Note that some incompatibilities may arise if the DKAN version is separately updated. Use this repository to benefit from updates tested for compatibility with the INPTDAT implementation.

## License

INPTDAT is freely-available under the ["GNU General Public License, version 2 or any later version"](https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html) license in agreement with the DKAN licensing.

## Acknowledgements

The development of the data platform INPTDAT was funded by the Federal Ministry of Education and Research – BMBF under grant 16FDM005 and is further supported by BMBF under grant 16QK03A. The responsibility for the content of this website and the software lies with the author(s).

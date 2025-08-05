from pymatgen import Structure
import json

def convert_json_to_lammps(json_file, lammps_file):
    # Load JSON file
    with open(json_file, 'r') as f:
        data = json.load(f)
    
    # Convert JSON data to Pymatgen Structure object
    structure = Structure.from_dict(data)
    
    # Save in LAMMPS data format
    with open(lammps_file, 'w') as f:
        f.write("# LAMMPS data file\n")
        f.write("\n")
        f.write(f"{len(structure)} atoms\n")
        f.write(f"{len(structure.species)} atom types\n")
        f.write("\n")
        f.write(f"{structure.lattice.a} {structure.lattice.b} {structure.lattice.c} 0 0 0\n")
        f.write(f"0 0 0 {structure.lattice.alpha} {structure.lattice.beta} {structure.lattice.gamma}\n")
        f.write("\n")
        
        # Write atom positions
        f.write("Atoms\n")
        for i, site in enumerate(structure):
            f.write(f"{i+1} {site.species_string} {site.coords[0]} {site.coords[1]} {site.coords[2]}\n")
        
if __name__ == "__main__":
    import sys
    if len(sys.argv) != 3:
        print("Usage: python convert_json_to_lammps.py <input_json_file> <output_lammps_file>")
        sys.exit(1)
    
    json_file = sys.argv[1]
    lammps_file = sys.argv[2]
    
    convert_json_to_lammps(json_file, lammps_file)
    

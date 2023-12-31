/// \file electromagnetic/TestEm11/include/DetectorMessenger.hh
/// \brief Definition of the DetectorMessenger class


#ifndef DetectorMessenger_h
#define DetectorMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class B1DetectorConstruction;
class G4UIdirectory;
class G4UIcommand;
class G4UIcmdWithAnInteger;
class G4UIcmdWithADoubleAndUnit;
class G4UIcmdWithoutParameter;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class DetectorMessenger: public G4UImessenger
{
  public:
  
    DetectorMessenger(B1DetectorConstruction* );
   ~DetectorMessenger();
    
    virtual void SetNewValue(G4UIcommand*, G4String);
    
  private:
  
    B1DetectorConstruction*      fDetector;
      
    G4UIdirectory*             fTestemDir;
    G4UIdirectory*             fDetDir; 
    G4UIcmdWithAnInteger*      fNbAbsorCmd;           
    G4UIcommand*               fAbsorCmd;
    G4UIcommand*               fNdivCmd;    
    G4UIcmdWithADoubleAndUnit* fSizeYZCmd;    
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif


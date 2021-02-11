
class adns
{
public:
    // The arduino pin number this chip's chip select is tied to.
    int ncs;
        
    // Sets up the chip select for this instance and initializes the chip (upload firmware, etc).
    void init (int chip_select);

    void read_motion();
    void read_motion_burst();
    
    void set_cpi(int cpi);
    void set_snap_angle(byte enable);
    
    int x;
    int y;

    void dispRegisters(void);

private:
    void upload_firmware();
    void com_begin();
    void com_end();

    byte read_reg(byte reg_addr);
    void write_reg(byte reg_addr, byte data);
    
};
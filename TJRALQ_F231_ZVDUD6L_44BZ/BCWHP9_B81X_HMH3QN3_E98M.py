import ctypes as ct
from os import path

class BCWHP9_B81X_HMH3QN3_E98M:
  def __init__(self, lib: str) -> None:
    full_lib = path.join(lib, 'libBCWHP9_B81X_HMH3QN3_E98M_97DRZM_VN2K_UG197FF_GSP0pyBindings.so')
    self.lib = ct.cdll.LoadLibrary(full_lib)
    self.lib.BCWHP9_B81X_HMH3QN3_E98M.restype = ct.c_char_p

  def __call__(self, context_ptr) -> str:
    return self.lib.BCWHP9_B81X_HMH3QN3_E98M(context_ptr)

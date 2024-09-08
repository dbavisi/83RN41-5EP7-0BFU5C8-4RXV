import ctypes as ct

class BCWHP9_B81X_HMH3QN3_E98M:
  def __init__(self, lib: str) -> None:
    self.lib = ct.cdll.LoadLibrary(lib)
    self.lib.BCWHP9_B81X_HMH3QN3_E98M.restype = ct.c_char_p

  def __call__(self, context_ptr) -> str:
    return self.lib.BCWHP9_B81X_HMH3QN3_E98M(context_ptr)

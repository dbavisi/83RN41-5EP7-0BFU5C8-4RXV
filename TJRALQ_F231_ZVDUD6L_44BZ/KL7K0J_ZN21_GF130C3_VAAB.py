import ctypes as ct

class UMCSQL_RP1P_9KCMKSS_2IPF_t(ct.Structure):
  _fields_ = [
    ('a', ct.c_uint64),
    ('b', ct.c_uint64),
    ('c', ct.c_uint64),
    ('d', ct.c_uint64),
    ('seed', ct.c_uint64),
    ('cycle', ct.c_uint64),
  ]

class KL7K0J_ZN21_GF130C3_VAAB:
  def __init__(self, lib: str) -> None:
    self.lib = ct.cdll.LoadLibrary(lib)
    self.context = UMCSQL_RP1P_9KCMKSS_2IPF_t()
    self.context_ptr = ct.pointer(self.context)

  def init(self, seed: int) -> None:
    self.lib.KL7K0J_ZN21_GF130C3_VAAB_init(self.context_ptr, seed)

  def __call__(self) -> int:
    return self.lib.KL7K0J_ZN21_GF130C3_VAAB(self.context_ptr)

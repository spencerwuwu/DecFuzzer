#ifndef s498r2_H
#define s498r2_H

#include "w2c2_base.h"

typedef struct s498r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s498r2Instance;

void f0(s498r2Instance*);

void f1(s498r2Instance*);

U32 f2(s498r2Instance*);

void f3(s498r2Instance*,U32);

U32 f4(s498r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s498r2Instance*,U32,U32,U32,U32,U32);

void f6(s498r2Instance*,U32);

void f7(s498r2Instance*,U32,U32,U32);

void f8(s498r2Instance*,U32,U32,U32);

void s498r2____wasm_call_ctors(s498r2Instance*i);

void s498r2____wasm_apply_data_relocs(s498r2Instance*i);

U32 s498r2_func_1(s498r2Instance*i);

void s498r2_call_cb(s498r2Instance*i,U32 l0);

void s498r2Instantiate(s498r2Instance* instance, void* resolve(const char* module, const char* name));

void s498r2FreeInstance(s498r2Instance* instance);

#endif /* s498r2_H */


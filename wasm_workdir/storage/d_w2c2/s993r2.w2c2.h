#ifndef s993r2_H
#define s993r2_H

#include "w2c2_base.h"

typedef struct s993r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s993r2Instance;

void f0(s993r2Instance*);

void f1(s993r2Instance*);

U32 f2(s993r2Instance*);

void f3(s993r2Instance*,U32);

U32 f4(s993r2Instance*,U32,U32,U32,U32,U32);

void f5(s993r2Instance*,U32,U32,U32,U32,U32);

void f6(s993r2Instance*,U32);

void f7(s993r2Instance*,U32,U32,U32);

void f8(s993r2Instance*,U32,U32,U32);

void s993r2____wasm_call_ctors(s993r2Instance*i);

void s993r2____wasm_apply_data_relocs(s993r2Instance*i);

U32 s993r2_func_1(s993r2Instance*i);

void s993r2_call_cb(s993r2Instance*i,U32 l0);

void s993r2Instantiate(s993r2Instance* instance, void* resolve(const char* module, const char* name));

void s993r2FreeInstance(s993r2Instance* instance);

#endif /* s993r2_H */


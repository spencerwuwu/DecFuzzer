#ifndef s290r2_H
#define s290r2_H

#include "w2c2_base.h"

typedef struct s290r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s290r2Instance;

void f0(s290r2Instance*);

void f1(s290r2Instance*);

U32 f2(s290r2Instance*);

void f3(s290r2Instance*,U32);

U32 f4(s290r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s290r2Instance*,U32,U32,U32,U32,U32);

void f6(s290r2Instance*,U32);

void f7(s290r2Instance*,U32,U32,U32);

void f8(s290r2Instance*,U32,U32,U32);

void s290r2____wasm_call_ctors(s290r2Instance*i);

void s290r2____wasm_apply_data_relocs(s290r2Instance*i);

U32 s290r2_func_1(s290r2Instance*i);

void s290r2_call_cb(s290r2Instance*i,U32 l0);

void s290r2Instantiate(s290r2Instance* instance, void* resolve(const char* module, const char* name));

void s290r2FreeInstance(s290r2Instance* instance);

#endif /* s290r2_H */


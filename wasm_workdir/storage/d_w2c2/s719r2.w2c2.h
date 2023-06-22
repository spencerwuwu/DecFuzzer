#ifndef s719r2_H
#define s719r2_H

#include "w2c2_base.h"

typedef struct s719r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s719r2Instance;

void f0(s719r2Instance*);

void f1(s719r2Instance*);

U32 f2(s719r2Instance*);

void f3(s719r2Instance*,U32);

U32 f4(s719r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s719r2Instance*,U32,U32,U32,U32,U32);

void f6(s719r2Instance*,U32);

void f7(s719r2Instance*,U32,U32,U32);

void f8(s719r2Instance*,U32,U32,U32);

void s719r2____wasm_call_ctors(s719r2Instance*i);

void s719r2____wasm_apply_data_relocs(s719r2Instance*i);

U32 s719r2_func_1(s719r2Instance*i);

void s719r2_call_cb(s719r2Instance*i,U32 l0);

void s719r2Instantiate(s719r2Instance* instance, void* resolve(const char* module, const char* name));

void s719r2FreeInstance(s719r2Instance* instance);

#endif /* s719r2_H */


#ifndef s830r2_H
#define s830r2_H

#include "w2c2_base.h"

typedef struct s830r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s830r2Instance;

void f0(s830r2Instance*);

void f1(s830r2Instance*);

U32 f2(s830r2Instance*);

void f3(s830r2Instance*,U32);

U32 f4(s830r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s830r2Instance*,U32,U32,U32,U32,U32);

void f6(s830r2Instance*,U32);

void f7(s830r2Instance*,U32,U32,U32);

void f8(s830r2Instance*,U32,U32,U32);

void s830r2____wasm_call_ctors(s830r2Instance*i);

void s830r2____wasm_apply_data_relocs(s830r2Instance*i);

U32 s830r2_func_1(s830r2Instance*i);

void s830r2_call_cb(s830r2Instance*i,U32 l0);

void s830r2Instantiate(s830r2Instance* instance, void* resolve(const char* module, const char* name));

void s830r2FreeInstance(s830r2Instance* instance);

#endif /* s830r2_H */


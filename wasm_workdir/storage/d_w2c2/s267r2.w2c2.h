#ifndef s267r2_H
#define s267r2_H

#include "w2c2_base.h"

typedef struct s267r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s267r2Instance;

void f0(s267r2Instance*);

void f1(s267r2Instance*);

U32 f2(s267r2Instance*);

void f3(s267r2Instance*,U32);

U32 f4(s267r2Instance*,U32,U32,U32,U32);

void f5(s267r2Instance*,U32,U32,U32,U32,U32);

void f6(s267r2Instance*,U32);

void f7(s267r2Instance*,U32,U32,U32);

void f8(s267r2Instance*,U32,U32,U32);

void s267r2____wasm_call_ctors(s267r2Instance*i);

void s267r2____wasm_apply_data_relocs(s267r2Instance*i);

U32 s267r2_func_1(s267r2Instance*i);

void s267r2_call_cb(s267r2Instance*i,U32 l0);

void s267r2Instantiate(s267r2Instance* instance, void* resolve(const char* module, const char* name));

void s267r2FreeInstance(s267r2Instance* instance);

#endif /* s267r2_H */


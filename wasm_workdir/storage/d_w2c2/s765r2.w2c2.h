#ifndef s765r2_H
#define s765r2_H

#include "w2c2_base.h"

typedef struct s765r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s765r2Instance;

void f0(s765r2Instance*);

void f1(s765r2Instance*);

U32 f2(s765r2Instance*);

void f3(s765r2Instance*,U32);

U32 f4(s765r2Instance*,U32,U32,U32,U32,U32);

void f5(s765r2Instance*,U32,U32,U32,U32,U32);

void f6(s765r2Instance*,U32);

void f7(s765r2Instance*,U32,U32,U32);

void f8(s765r2Instance*,U32,U32,U32);

void s765r2____wasm_call_ctors(s765r2Instance*i);

void s765r2____wasm_apply_data_relocs(s765r2Instance*i);

U32 s765r2_func_1(s765r2Instance*i);

void s765r2_call_cb(s765r2Instance*i,U32 l0);

void s765r2Instantiate(s765r2Instance* instance, void* resolve(const char* module, const char* name));

void s765r2FreeInstance(s765r2Instance* instance);

#endif /* s765r2_H */


#ifndef s574r2_H
#define s574r2_H

#include "w2c2_base.h"

typedef struct s574r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s574r2Instance;

void f0(s574r2Instance*);

void f1(s574r2Instance*);

U32 f2(s574r2Instance*);

void f3(s574r2Instance*,U32);

U32 f4(s574r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s574r2Instance*,U32,U32,U32,U32,U32);

void f6(s574r2Instance*,U32);

void f7(s574r2Instance*,U32,U32,U32);

void f8(s574r2Instance*,U32,U32,U32);

void s574r2____wasm_call_ctors(s574r2Instance*i);

void s574r2____wasm_apply_data_relocs(s574r2Instance*i);

U32 s574r2_func_1(s574r2Instance*i);

void s574r2_call_cb(s574r2Instance*i,U32 l0);

void s574r2Instantiate(s574r2Instance* instance, void* resolve(const char* module, const char* name));

void s574r2FreeInstance(s574r2Instance* instance);

#endif /* s574r2_H */


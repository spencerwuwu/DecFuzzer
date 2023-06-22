#ifndef s688r2_H
#define s688r2_H

#include "w2c2_base.h"

typedef struct s688r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s688r2Instance;

void f0(s688r2Instance*);

void f1(s688r2Instance*);

U32 f2(s688r2Instance*);

void f3(s688r2Instance*,U32);

U32 f4(s688r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s688r2Instance*,U32,U32,U32,U32,U32);

void f6(s688r2Instance*,U32);

void f7(s688r2Instance*,U32,U32,U32);

void f8(s688r2Instance*,U32,U32,U32);

void s688r2____wasm_call_ctors(s688r2Instance*i);

void s688r2____wasm_apply_data_relocs(s688r2Instance*i);

U32 s688r2_func_1(s688r2Instance*i);

void s688r2_call_cb(s688r2Instance*i,U32 l0);

void s688r2Instantiate(s688r2Instance* instance, void* resolve(const char* module, const char* name));

void s688r2FreeInstance(s688r2Instance* instance);

#endif /* s688r2_H */


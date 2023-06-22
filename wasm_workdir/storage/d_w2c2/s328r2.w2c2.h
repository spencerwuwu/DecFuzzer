#ifndef s328r2_H
#define s328r2_H

#include "w2c2_base.h"

typedef struct s328r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s328r2Instance;

void f0(s328r2Instance*);

void f1(s328r2Instance*);

U32 f2(s328r2Instance*);

void f3(s328r2Instance*,U32);

U32 f4(s328r2Instance*,U32,U32,U32,U32,U32);

void f5(s328r2Instance*,U32,U32,U32,U32,U32);

void f6(s328r2Instance*,U32);

void f7(s328r2Instance*,U32,U32,U32);

void f8(s328r2Instance*,U32,U32,U32);

void s328r2____wasm_call_ctors(s328r2Instance*i);

void s328r2____wasm_apply_data_relocs(s328r2Instance*i);

U32 s328r2_func_1(s328r2Instance*i);

void s328r2_call_cb(s328r2Instance*i,U32 l0);

void s328r2Instantiate(s328r2Instance* instance, void* resolve(const char* module, const char* name));

void s328r2FreeInstance(s328r2Instance* instance);

#endif /* s328r2_H */

